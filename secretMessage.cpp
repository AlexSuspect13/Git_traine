std::string greet(std::string name) 
{
  std::cout<< "Hello, " + name + "!";
  if(name == "Johnny") {
    return "Hello, my love!";
  }
  return "Hello, " + name + '!';
}
