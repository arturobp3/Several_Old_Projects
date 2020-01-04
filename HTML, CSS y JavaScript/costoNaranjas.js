/*Sos una persona con hábitos. Cada semana comprás 5 naranjas. ¡Pero el precio de las naranjas sigue cambiando! 
1. Querés declarar una función que calcule cuánto cuesta comprar 5 naranjas.
2. Después querés calcular el costo de comprar las 5 naranjas juntas.
3. Escribí una función que haga esto, y que se llame costoNaranjas(). 
4. Debe tomar un parámetro que es el costo de una naranja y multiplicarlo por 5
5. Llamá a la función en la que las naranjas cuestan $ 5 cada una.

?
Consejo
¿Cuál es esa pequeña parte de los datos de entrada que cambia cada vez? 
Sería el precio. Así que, nombra a tu parámetro precio. ¡Y cuando llames a tu función, asígnale un número al precio para ver cuánto cuestan 5 naranjas!
*/
var costoNaranjas=function (precio) {
    var costoNaranjas = precio * 5;
    console.log(costoNaranjas);   
};
costoNaranjas(2);