(*
Ronuk Ray, Period 2
1 February 2019
Lab 1.1
Function for And and Or
*)

datatype boolean = True | False
fun myor(a, b) = 
    if a = True then
        True
    else
        b;
        
fun myand(a, b) =
    if a = False then
        False
    else
        b;
fun mynot(a) =
	if a = False then
		True
	else
		False;
(*testing*)
myor(False, True);
myand(True, True);
mynot(True)

