let num1=window.prompt("type the num1");
let num2=window.prompt("type the num2");
let op = window.prompt("type the opeartor");
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