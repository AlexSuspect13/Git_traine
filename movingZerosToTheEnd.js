let moveZeros = function (arr) {
  const arr1 = [];
  const arr2 = [];
  let result;
  for (let i = 0; i < arr.length; i++) {
  if (arr[i] ===  0) {
    arr1.push(arr[i]);
  } 
    else {
   arr2.push(arr[i]);
  }
  }
  result = arr2.concat(arr1);
  return result;
}