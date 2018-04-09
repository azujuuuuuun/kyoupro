S = gets.split('+')
N = S.length

cnt = 0
N.times do |i|
  unless S[i].include?('0')
    cnt += 1
  end
end

puts cnt
