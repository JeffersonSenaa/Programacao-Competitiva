-- Registrando alterações em uma tabela de log

-- Crie um trigger chamado log_alteracoes_funcionario que registre todas as atualizações de salário 
-- dos funcionários em uma tabela HistoricoSalario com os seguintes campos:

--     id (chave primária, auto_increment)
--     funcionario_id
--     salario_anterior
--     novo_salario
--     data_alteracao (timestamp)

-- O trigger deve ser acionado antes de uma atualização na tabela Funcionarios.

CREATE TABLE HistoricoSalario (
  id INT AUTO_INCREMENT PRIMARY KEY,
  funcionario_id INT,
  salario_anterior DECIMAL(10,2),
  novo_salario DECIMAL(10,2),
  data_alteracao TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TRIGGER log_alteracoes_funcionarios
BEFORE UPDATE ON Funcionarios
FOR EACH ROW
BEGIN
    INSERT INTO HistoricoSalario (funcionario_id, salario_anterior, novo_salario)
    VALUES (OLD.id, OLD.salario, NEW.salario);
END;

