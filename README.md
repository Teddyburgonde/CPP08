**ex00**

```c
std::vector : rapide pour l'accès par indice et ajout en fin.
std::list : rapide pour les insertions/suppressions partout, mais lent pour l'accès par indice.
std::deque : rapide pour les insertions/suppressions aux deux extrémités, mais un peu moins performant pour l'accès par indice que std::vector.
```

**ex01**

Méthode addNumber(int n) : 

```c
- Ajoute un nombre à la collection.
- Si le tableau est déjà plein (c'est-à-dire qu'il y a déjà N nombres), il doit lever une exception.
```

Méthode shortestSpan() :

```c

- Calcule la plus petite différence entre deux nombres dans la collection.
- Si tu as moins de 2 nombres, tu dois lever une exception car il n'y a pas assez d'éléments pour calculer un écart.

```


Méthode longestSpan() :

```c

- Calcule la plus grande différence entre deux nombres.
- Là encore, si tu as moins de 2 nombres, tu dois lever une exception.

```

Option bonus :

```c

- Implémenter une méthode pour remplir le Span avec une plage d'itérateurs 
(c'est-à-dire, ajouter plusieurs éléments en une seule fois).

template <typename Iterator>
void addRange(Iterator begin, Iterator end)
{
	int	rangeSize;
	int remainingCapacity;
	 // Étape 1 : Calculer la taille de la plage
	rangeSize = std::distance(begin, end);
	if (rangeSize == 0) 
        return ;
	// Étape 2 : Vérifie si le conteneur est déjà plein
	if (_number.size() == _maxsize)
		throw SpanFullException();
	// Étape 3 : Calcule la capacité restante
	remainingCapacity = _max_size - _number.size();
	// Étape 4 : Vérifie si on a assez de place pour ajouter la plage
	if (rangeSize > remainingCapacity)
		throw SpanFullException();
	// Étape 5 : Insère les éléments
	_number.insert(_number.end(), begin, end);
}

```

**ex02**

On veut rendre le conteneur std::stack iterable, mais par défaut, 
std::stack ne permet pas d'itérer sur ses éléments.
Sous le capot std::stack utilise un autre conteneur ( comme std::deque) pour 
stocker les elements.

