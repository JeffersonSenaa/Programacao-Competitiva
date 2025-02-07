-- Crie uma procedure chamada TotalVendasCliente que recebe o 
-- ID de um cliente e retorna o valor total das compras feitas por ele na tabela Vendas.

DELIMITER $$

CREATE PROCEDURE TotalVendasCliente(IN p_cliente_id INT, OUT total_vendas DECIMAL(10,2))
BEGIN
  SELECT SUM(valor) INTO total_vendas FROM Vendas WHERE cliente_id = p_cliente_id;
END $$

CALL TotalVendasCliente(1, @resultado);
SELECT @resultado;
