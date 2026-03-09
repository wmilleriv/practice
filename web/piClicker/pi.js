const update=document.getElementById('update');
var piSpan=document.getElementById('pi');

var term=parseFloat(piSpan.innerHTML)
var pi=parseFloat(piSpan.innerHTML);
var clicks=0;
function addTerm(){
	clicks=clicks+1;
	term=parseFloat(4*((-1)**clicks)/(2*clicks+1));
	pi=pi+term;
	console.log(pi);
	piSpan.innerHTML=pi
}

update.addEventListener('click', addTerm);
