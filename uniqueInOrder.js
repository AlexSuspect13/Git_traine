// https://www.codewars.com/kata/54da539698b8a2ad76000228
var uniqueInOrder=function(iterable){
 
  if(typeof(iterable) == 'string'){
    iterable = iterable.split("")
     }
  return iterable.filter((el,i,arr)=>{return arr[i] != arr[i+1]})
}
