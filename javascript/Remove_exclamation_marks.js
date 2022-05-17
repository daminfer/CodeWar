/* Problème Rank: 8 Kyu

Write function RemoveExclamationMarks which removes all exclamation marks from a given string.

*/

function removeExclamationMarks(s) {
    return s.replace(/!/g,"");
}

console.log(removeExclamationMarks("ndExUIXrGB!BAFhgjZkVu tQgUBfHeep!uZSNYcFwAO"))