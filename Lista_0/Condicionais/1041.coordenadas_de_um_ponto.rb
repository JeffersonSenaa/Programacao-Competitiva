x, y = gets.split.map(&:to_f)

if x.zero? && y.zero?
  puts "Origem"
elsif x.zero?
  puts "Eixo Y"
elsif y.zero?
  puts "Eixo X"
elsif x > 0 && y > 0
  puts "Q1"
elsif x < 0 && y > 0
  puts "Q2"
elsif x < 0 && y < 0
  puts "Q3"
elsif x > 0 && y < 0
  puts "Q4"
end
