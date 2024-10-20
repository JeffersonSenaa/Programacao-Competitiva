n = int(input())

x = list(map(int, input().split()))

menor = min(x)
pos = x.index(menor)

print(f'Menor valor: {menor}')
print(f'Posicao: {pos}')