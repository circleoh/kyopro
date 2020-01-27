import Foundation

var numArr = [Int]()
let c = Int(readLine()!)!
for _ in 0..<c {
    numArr.append(Int(readLine()!)!)
}

func selectionSort(arr: inout [Int], len: Int) {
    var ans = [Int]()
    for i in 0..<len {
        var min=i
        for j in i..<len {
            if (arr[min] > arr[j]) {
                min = j
            }
        }
        arr.swapAt(i, min)
    }
}

selectionSort(arr: &numArr, len: c)
for i in 0..<c {
    print(numArr[i])
}
