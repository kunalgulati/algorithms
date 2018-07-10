let myList = [|1,8,6,6,6,5,11,321,3,9,2 |];

type storage = {
	mutable value: int, 
	mutable position: int
};

let sort = () => {
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
	