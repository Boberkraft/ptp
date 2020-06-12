# 10. Odgadywanie przez komputer kolejnego wyrazu ciągu liczbowego na podstawie
# podanych kilku kolejnych wyrazów przez użytkownika, np. trzech. Komputer próbuje
# rozpoznać ciąg arytmetyczny bądź geometryczny we wprowadzonych wartościach (ew.
# też inne, zgodnie z inwencją autora programu) i na tej podstawie obliczyć kolejny wyraz.

def predict(given)
  a, b = given[-2..-1]

  return next_arithmetic(a, b) if arithmetic?(given)
  return next_geometric(a, b) if geometric?(given)
  nil
end

def arithmetic?(given)
  first, second = given[0..1]
  rest = second - first
  (2...given.length).each do |i|
    if rest != given[i] - given[i - 1]
      return false
    end
  end
  true
end

def next_arithmetic(a, b)
  rest = b - a
  b + rest
end

def geometric?(given)
  first, second = given[0..1]
  q = second / first.to_f
  (2...given.length).each do |i|
    if q != given[i] / given[i - 1].to_f
      return false
    end
  end
  true
end

def next_geometric(a, b)
  q = b / a.to_f
  b * q
end



def test(given, expected)
  if predict(given) == expected
    print '.'
  else
    puts
    puts "GIVEN   : #{predict(given)}"
    puts "EXPECTED: #{expected}"
    puts predict(given) == expected
  end
end

test([1, 5, 9], 13)
test([1, 2, 3], 4)
test([-3, -2, -1], 0)
test([-2, -1, 0], 1)
test([10, 20, 30], 40)
test([1, 1 * 0.3, 1 * 0.3 * 0.3], 1 * 0.3 * 0.3 * 0.3)
test([10, 100, 1000], 10000)










