std::string reverse_words(std::string str){
  auto b = str.begin(); 
  auto e = str.end(); 
  
  while(b < e){
    auto k = std::find(b,e,' '); 
    std::reverse(b,k); 
    b = k + 1; 
  }
  return str; 
}
