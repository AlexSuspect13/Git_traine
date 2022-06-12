def weather_info (temp)
  c = convertToCelsius(temp)
  if (c > 0)
    return (c.round(5).to_s + " is above freezing temperature")
    end
    c.round(5).to_s + " is freezing temperature"
end

def convertToCelsius (temperature)
  ((temperature - 32) * (5.0/9.0)).round(5)
end
