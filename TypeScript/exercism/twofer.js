"use strict";
// I've done this exercise before in other languages, so I won't do too much explaining here
exports.__esModule = true;
exports.twoFer = void 0;
function twoFer(name) {
    if (!name) {
        return ("One for you, one for me.");
    }
    else {
        return ("One for ".concat(name, ", one for me."));
    }
}
exports.twoFer = twoFer;
