/*let myList = [|1,8,6,6,6,5,11,321,3,9,2 |];
let length = Array.length(myList);

type storage = {
	mutable value: int, 
	mutable position: int
};

let rec insertionSort = (myList: array(int),length) => {

	/*Base Case*/
	if(length<1){

	}
	else{ 
		/*Sort first n-1 elelments*/
		insertionSort(myList,length-1)
	}

	let store = {value: myList[length-1], position: length-1};

		while( store.position>0 && myList[(store.position)-1]>store.value){
			myList[store.position] = myList[store.position-1];
			store.position = store.position-1;
		};		
	myList[store.position] = store.value;


};
	*/