# Ciągi

Zadaniem programu jest odgadnięcie przez komputera kolejnego wyrazu ciągu liczbowego na podstawie podanych kilku kolejnych wyrazów przez użytkownika, np. trzech. 
Komputer próbuje rozpoznać ciąg arytmetyczny bądź geometryczny we wprowadzonych wartościach (ew. też inne, zgodnie z inwencją autora programu) i na tej podstawie obliczyć kolejny wyraz.

**Dane wejściowe / argumenty programu**
1. Kolejny cyfry ciągu oddzielone spacjami
<br><br>

**Dane wyjściowe**

Informacja jaki został wykryty ciąg oraz jego następny wyraz

<br>
**Dostępne ciągi:**

1. Geometryczny (np. _2 4 8 16..._)
2. Arytmetyczny (np. _2 4 6 8..._)

<br>
**Przykład wywołania programu:**

`./ciagi 2 4 6 8`

<br>
**Przykład danych wyjściowych:**

`It's Arithmetic Series. Next number is 6` oraz kod programu (exit code) `0`

## Jak skompilować?
Należy użyc cmake, a następnie narzędzi jakie cmake zbudował. Na Linuxie wygląda to następująco:

```
cmake -B ./build
make
```

## Co z dokumentacją?
Opis struktury znajduje się poniżej, a dokumentacja poszczególnych funkcji nie istnieje.

Utrzymywanie dokumentacji jest trudne. Chcemy uniknąć jej przedawnienia.


## Opis struktury
- Program `.cpp` znajduje się w folderze `./program`.
- Nagłówki znajdują się w `./program/includes/`, a pliki źródłowe w `./program/src/`.


- Klasa Series (`./program/includes/series.h`) definiuje interfejs dla wszystkich ciągów
- Każdy obiekt konkretnego ciągu (np. `./program/includes/arithmetic.h`) jest w stanie rozpoznać swój ciąg.
- W jednej funkcji odbywa się instanizacja wszyskich ciągów i jak któryś wykryje swój ciąg, 
to przerywane jest szukanie i wyświetlany jest wynik. 


- Program posiada walidację. W przypadku gdy zostały przesłane niepoprawne argumenty (np. napisy zamiast liczb), to program
kończy się kodem `2`, a w przypadku gdy nie zostawł wykryty żaden ciąg, to program kończy się kodem `1`.