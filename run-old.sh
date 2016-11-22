asm2wasm ./src/old/example.asm.js -o ./src/old/example.wast
wasm-as ./src/old/example.wast -o ./src/old/example.wasm

./node_modules/http-server/bin/http-server ./src/old -o