def square_sum(numbers)
  return 0 if numbers.size==0
  numbers.map { |el|  el**2 }.reduce(&:+)
end
