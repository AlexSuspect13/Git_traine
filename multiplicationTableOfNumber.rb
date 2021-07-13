def multiTable(number)
  (1..10).to_a.map{ |el| "#{el} * #{number} = #{el*number}" }.join("\n")
end
