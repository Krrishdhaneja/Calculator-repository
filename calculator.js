let num1=window.prompt("type the num1");
let num2=window.prompt("type the num2");
let op = window.prompt("type the operator");
num1 = parseFloat(num1);
num2 = parseFloat(num2);
if (op == '+') {
	alert(num1+num2);
}
else if (op == '-') {
	alert(num1 - num2);
}
else if (op == 'x') {
	alert(num1*num2);
}
else if (op == '/') {
	alert(num1/num2);
}
else if (op == "sq") {
	let num3=window.prompt("type 1 for num1 or 2 for num2");
	num3 = parseFloat(num3);
	if (num3 == 1) {
		alert(num1*num1);
	}
	else if (num3 == 2) {
		alert(num2*num2);
	}
}