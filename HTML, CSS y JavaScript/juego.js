var nombreUsuario = prompt("Cómo te llamas?");
var usuarioElige = prompt("¿Qué eliges," + " " + nombreUsuario + "? ¿Piedra, Papel o Tijera?");
var ordenadorElige = Math.random() 
	if (ordenadorElige <=0,33) {
		alert("Piedra");
	}
	else if (0,34<ordenadorElige<1) {
		alert("Papel");
	}
	else {
		alert("Tijera");
	}



var comparacion = function (usuarioElige, ordenadorElige) {
	if(usuarioElige === "Piedra") {
		if (ordenadorElige==="Piedra") {
			alert("¡Ha habido un empate!");
		}
		else if (ordenadorElige==="Papel") {
			alert("¡Perdiste!");
		}
		else {
			alert("¡Ganaste!");
		}
	}
	else if (usuarioElige === "Papel") {
		if (ordenadorElige==="Piedra") {
			alert("¡Ganaste!");
		}
		else if (ordenadorElige==="Papel") {
			alert("¡Ha habido un empate!");
		}
		else {
			alert("¡Perdiste!");
		}
	}
	else {
		if (ordenadorElige==="Piedra") {
			alert("¡Perdiste!");
		}
		else if (ordenadorElige==="Papel") {
			alert("¡Ganaste!");
		}
		else {
			alert("¡Ha habido un empate!");
		}
	}
}