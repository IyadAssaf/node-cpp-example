(function () {
    var myaddon = require("./build/Release/hello.node");
    console.log(myaddon.hello());
    console.log(myaddon.porty());
})();
