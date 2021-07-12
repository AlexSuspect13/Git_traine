// https://www.codewars.com/kata/5556282156230d0e5e000089
std::string DNAtoRNA(std::string dna){
  for(int i = 0;i != dna.length();++i)
    {
    if(dna[i] == 'T')
      {
      dna[i] = 'U';
    }
  }
  return dna;
}
