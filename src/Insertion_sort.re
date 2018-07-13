let myList = [|1,8,6,6,6,5,11,321,3,9,2 |];

type iterators = {
	mutable i: int, 
};

/*let sort = () => {
	let length = Array.length(myList);

	for(i in 0 to (length-1)){
		let store = {value: myList[i], position: i};
		while( store.position>0 && myList[(store.position)-1]>store.value){
			myList[store.position] = myList[store.position-1];
			store.position = store.position-1;
		};		
		myList[store.position] = store.value;
	};
};
	*/

let rec sort = (length) =>{
	if(length>1){
		/*Sort first n-1 element*/
		sort(length-1);
		let last = myList[length-1];
		let iterators = {i: length-2};

		while(iterators.i >= 0 && myList[iterators.i] > last){
			myList[iterators.i + 1] = myList[iterators.i];
			iterators.i = iterators.i - 1;
		};
		myList[iterators.i + 1] = last;
	};
		
};


sort(11);
Js.log(myList);