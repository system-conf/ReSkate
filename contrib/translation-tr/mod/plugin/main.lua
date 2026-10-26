-- Türkçe: the game's text in Turkish. data/strings.json is one object of {"ID_SOME_STRING" or
-- "#1a2b3c4d": "text"}; keys starting with _ are notes. The texts go to the game in parts over a
-- few ticks, so no single call comes near the 50 ms a call may take.
local PART = 1000

local texts = reskate.package.read_json("data/strings.json")
if type(texts) ~= "table" then
    error("data/strings.json is missing or is not an object")
end

-- Turkish casing for the text the game upper- or lower-cases itself (DİL, not DIL), where
-- this ReSkate has it.
if reskate.strings.set_case_rules then
    reskate.strings.set_case_rules("tr")
end

local key = nil
local total, done = 0, false

reskate.on("tick", function()
    if done then return end
    local part, count = {}, 0
    repeat
        local text
        key, text = next(texts, key)
        if key ~= nil then
            part[key] = text
            count += 1
        end
    until key == nil or count >= PART
    if count > 0 then
        local taken, why = reskate.strings.set_many(part)
        if not taken then
            reskate.log("Turkish text not set: " .. tostring(why))
            done = true
            return
        end
        total += taken
    end
    if key == nil then
        done = true
        texts = nil
        reskate.log(total .. " strings set in Turkish")
    end
end)
