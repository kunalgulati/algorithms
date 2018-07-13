/*1. Divide and conquer 
2. Divide input in two halves 
3. Call itself for 2 halves/
4. Then Merge


1. if r > l
	2. Find the middle point and divide the array in two halves 
		Middle = m = (l+r)/2
	3. Call Merge sort for first half:
		Call MergeSort(arr, l, m);
	4. Merge the two halves sorted in step 2 and 3:
		Call merge(arr, l, m, r);


Note: 
1. Divide till the size becomes == 1
*/


/* required*/
/*1. Two temporary array => Left andd right
2, two iterators for temp arrays => i and j

*/

type iterators = {
	mutable i: int, 
	mutable j: int,
	mutable k: int
};

let myList = [|1,1,6,6,6,5,11,3,9,2,1,11,11,1,0000,0 |];


let merge = ( first, middle, last)=> {

	let leftSize = middle - first + 1;
	let rightSize = last - middle;

	/*Temp Array*/
	let leftArray = Array.make(leftSize, 0);
	let rightArray = Array.make(rightSize, 0);
	let length = Array.length(myList);
	let tempArray = Array.make(length, 0);

	/*Copying Main array in Sub Array*/
	for(i in 0 to leftSize-1){
		leftArray[i]= myList[first+i];
	};
	for(j in 0 to rightSize-1){
		rightArray[j]= myList[middle + 1 +j];
	};

	/*declaring fres iterrators*/
	let iterators = {	
						i: 0, 
						j: 0, 
						k: first
					};

	/* Creating asorted array*/
	while( iterators.i < leftSize && iterators.j < rightSize ){
		if(leftArray[iterators.i] <= rightArray[iterators.j]){
			myList[iterators.k] = leftArray[iterators.i];
			iterators.i = iterators.i + 1;
		}
		else{
			myList[iterators.k] = rightArray[iterators.j];
			iterators.j = iterators.j + 1;
		};
		iterators.k = iterators.k + 1;
	};

	while( iterators.i < leftSize){
		myList[iterators.k] = leftArray[iterators.i];
		iterators.i = iterators.i +1; 
		iterators.k = iterators.k + 1;
	};

	while(iterators.j < rightSize){
		myList[iterators.k] = rightArray[iterators.j];
		iterators.j = iterators.j +1; 
		iterators.k = iterators.k + 1;

	};
};

let rec mergeSort = (first, last ) => {
	if(first < last){
		let middle = (first + last) / 2;
		mergeSort( first, middle);
		mergeSort( middle+1, last);
		merge(first,middle,last);   
	};
};

let main = () => {
	let length = Array.length(myList);
	mergeSort(0, length-1);
	Js.log(myList);
};


main();


















