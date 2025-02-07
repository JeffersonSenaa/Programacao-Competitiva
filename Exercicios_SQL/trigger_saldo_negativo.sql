-- Crie um trigger chamado evitar_saldo_negativo que impeça que uma conta bancária tenha um saldo menor que zero ao atualizar a tabela Contas.

CREATE TRIGGER evitar_saldo_negativo
BEFORE UPDATE ON Contas
FOR EACH ROW
BEGIN
    IF NEW.saldo < 0 THEN
        RAISE EXCEPTION 'Saldo negativo'
    END IF;
END;
