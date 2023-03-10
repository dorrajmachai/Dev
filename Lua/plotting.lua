-- this is an example from Lua 5.1, so it probably won't work

function eraseTerminal()
	io.write(string.format("\27[2J]"))
end

function mark(x, y)
	io.write(string.format("\27[%d;[%dH*", y, x))
end

TermSize = { w = 80, h = 24}

function plot(f)
	eraseTerminal()
	for i = 1, TermSize.w do
		local x = (i / TermSize.w) * 2 - 1
		local y = (f(x) + 1) / 2 * TermSize.h
		mark(i, y)
	end
	io.read()
end

plot(function(x) return math.sin(x * 2 * math.pi) end)
