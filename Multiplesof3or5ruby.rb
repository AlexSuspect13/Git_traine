// https://www.codewars.com/kata/54da539698b8a2ad76000228
def solution(number)
(1...number).to_a.select{|el| el%3 == 0 or el%5 == 0 }.sum
end
