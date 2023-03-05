-- the break and return statements in Lua
a = {}

local i = 7
while a[i] do
    if a[i] == i then
        break -- break (and return) can only appear as the last statement of a block
    end
    i = i + 1
end