// https://www.codewars.com/kata/58dbdccee5ee8fa2f9000058/train/csharp
namespace Solution
{
    static class Kata
    {
        public static bool SpeakEnglish(string sentence) => sentence.ToLower().IndexOf("english") >= 0 ? true : false; 
    }
}
