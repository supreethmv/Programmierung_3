# Programmierung_3
Assignment 3

Aufgabe 3.1. (4 Punkte) Control Flow Basics Diese Aufgabe dient dazu, den Einsatz von Kontrollstrukturen zu ¨uben.
(a) Schreiben Sie ein Programm, das eine nat¨urliche Zahl n > 1 aus Kommandozeileninput einliest und die Summe aller ungeraden Zahlen kleiner gleich n ausgibt.
(b) Lesen Sie mit scanf einen ANSI-String aus dem Kommandozeileninput ein und speichern Sie ihn in einem char Array. Formatieren Sie ihn neu, indem Sie alle Kleinbuchstaben durch Großbuchstaben ersetzen, aber alle weiteren chars unver¨andert lassen. Geben Sie daraufhin den neu formatierten String wieder aus.


Aufgabe 3.2. (6 Punkte) Trapezregel Im Folgenden sollen Sie Funktionen numerisch mithilfe ihrer Taylorreihe approximieren und dann mittels der Trapezregel numerisch integrieren.
(a) Schreiben Sie ein Programm, das eine beliebige reelle Fließkommazahl x einliest und die trigonometrischen Funktionen sin(x) und cos(x) ausgibt. Verwenden Sie die Taylorreihe beider Funktionen. Nutzen Sie des Weiteren die Eigenschaften der trigonometrischen Funktionen (Symmetrie, etc.), um die Auswertung der Taylorreihe auf das Interval [0,π/2] beschr¨anken zu k¨onnen. Brechen Sie die Reihe jeweils nach der achten Ordnung ab.
(b) Ein bestimmtes Integral der Form
I =Zb a
f(x)dx

kann numerisch mithilfe der Trapezregel integriert werden. Hierzu wird das Intervall [a,b] zun¨achst in n Teilintervalle [xi,xi+1], i = 0,...,n, diskretisiert. Hierbei gilt xi = x0 + i∆, ∆ = (b−a)/n. (2) Die Approximation des Integrals ist dann gegeben durch
In =
n−1 X i=0
f(xi) + f(xi+1) 2
∆, (3)
und f¨ur glatte Funktionen f gilt In → I, f¨ ur n →∞. Verwenden Sie die von Ihnen in Aufgabenteil (a) deﬁnierten Routinen zur Berechnung der trigonometrischen Funktionen und berechnen Sie das Integral J0(x) = 1 πZπ 0 cosxsin(ϕ)dϕ (4) mithilfe der Trapezregel. Geben Sie eine Wertetabelle im Bereich von x ∈ (0,10] aus. Einen Bonuspunkt gibt es f¨ur das Plotten Ihrer Wertetabelle!




Aufgabe 3.3. (6 Punkte) Ein Exkurs in die Zahlentheorie Der Einsatz von Numerik beschr¨ankt sich nicht nur auf die angewandte Mathematik. Auch in anderen Teilbereichen, wie z.B. in der Zahlentheorie k¨onnen numerische Verfahren genutzt werden, zum Beispiel um mathematische Thesen zu widerlegen, oder numerische Evidenz f¨ur deren Korrektheit zu schaﬀen.
(a) In der Vorlesung wurde die (unbewiesene) Collatz Vermutung eingef¨uhrt. Diese besagt, dass f¨ ur alle Zahlen n0 ∈ N die Folge, die durch die Vorschrift nj+1 = nj/2, nj gerade nj+1 = 3nj + 1, nj ungerade (5)
deﬁniert wird, die Zahl 1 erreicht. Das bedeutet es existiert ein Index j > 0, so dass nj = 1. Die kleinste Zahl j, die diese Bedingung erf¨ullt wird Pfadl¨ange genannt. Beweisen Sie numerisch, dass die Vermutung f¨ur alle Zahlen n0 ≤ 109 gilt. Erweitern Sie hierzu das Programm aus der Vorlesung entsprechend. Bestimmen Sie die Zahl n ≤ 109, die die gr¨oßte Pfadl¨ange aufweist und geben Sie n, sowie die entsprechende Pfadl¨ange aus.
(b) Schreiben Sie ein Programm, das folgende Behauptung numerisch f¨ur alle nat¨urlichen Zahlen d kleiner gleich dem Makro D MAX ¨uberpr¨uft. Die Gleichung k X j=1 ck j = dk, (6) mit cj,d ∈ N ≥ 1 besitzt keine L¨osung f¨ ur k = 4. Einen Bonuspunkt falls Sie mit Ihrem Programm die Behauptung widerlegen (aufwendig!).
