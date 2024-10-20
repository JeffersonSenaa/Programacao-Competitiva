# Tabela de preços dos itens
tabela_precos = {
    1: 4.00,  # Cachorro Quente
    2: 4.50,  # X-Salada
    3: 5.00,  # X-Bacon
    4: 2.00,  # Torrada Simples
    5: 1.50   # Refrigerante
}

codigo, quantidade = map(int, input().split())

if codigo in tabela_precos:
    total = tabela_precos[codigo] * quantidade
    print(f"Total: R$ {total:.2f}")
else:
    print("Código inválido")
