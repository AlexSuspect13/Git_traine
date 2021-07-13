// https://www.codewars.com/kata/5265326f5fda8eb1160004c8
def weather_info (temp)
  c = convertToCelsius(temp)
  if (c > 0)
    return (c.round(5).to_s + " is above freezing temperature")
  end
    return (c.round(5).to_s + " is freezing temperature")
end

def convertToCelsius (temperature)
  celsius = ((temperature - 32) * (5.0/9.0)).round(5)
end
