type iterators = {
	mutable i: int, 
};

let rec sort = (myList: array(int) , length) =>{
	if(length>1){
		/*Sort first n-1 element*/
		sort(myList, length-1);
		let last = myList[length-1];
		let iterators = {i: length-2};

		while(iterators.i >= 0 && myList[iterators.i] > last){
			myList[iterators.i + 1] = myList[iterators.i];
			iterators.i = iterators.i - 1;
		};
		myList[iterators.i + 1] = last;
	};
		
};

let main = () =>{
	let myList = [|1,8,6,3333,6,6,5,11,321,3,9,2 |];
	sort(myList, Array.length(myList));
	Js.log(myList);
};

main();