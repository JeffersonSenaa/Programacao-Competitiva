-- Crie um trigger chamado notificar_exclusao_pedido que insere um 
-- registro na tabela Notificacoes sempre que um pedido for excluído 
-- da tabela Pedidos. A notificação deve conter:

--     id (auto_increment)
--     mensagem (Exemplo: "Pedido X foi excluído")
--     data_notificacao (timestamp)

CREATE TABLE Notificacoes (
  id INT AUTO_INCREMENT PRIMARY KEY,
  mensagem VARCHAR(255),
  data_notificacao TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TRIGGER notificar_exclusao_pedidos
BEFORE DELETE ON Pedidos
FOR EACH ROW
BEGIN
    INSERT INTO Notificacoes(mensagem) VALUES (CONCAT('Pedido', OLD.id, 'excluido'));
END;