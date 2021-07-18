let moveZeros = function (arr) {
  const arr1 = [];
  const arr2 = [];
  for (let i in arr) {
  if (arr[i] === 0)
    arr1.push(arr[i])
  else
    arr2.push(arr[i])
  }
  return arr2.concat(arr1)
}
