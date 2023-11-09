/**
 * @param {string} val
 * @return {Object}
 */




var expect = function (val) {

    function toBe(compare) {

        if (compare === val ) {
            return true;
        }
       
        throw new Error("Not Equal");
    }

    function notToBe(compare) {


        if (compare !== val) {
            return true;
        }
       
        throw new Error("Equal");
    }

    return {
        toBe,
        notToBe
    }
};


