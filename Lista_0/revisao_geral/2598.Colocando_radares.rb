t = gets.to_i

t.times do
  n, m = gets.split.map(&:to_i)
  result = (n + m - 1) / m

  puts result
end
