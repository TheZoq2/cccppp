ccpc-compile() {
    echo 'Thank you for supporting our glorious leader'
    local file="$1"
    mv "${file}" temp.c
    gcc temp.c -o our_program
    mv temp.c "${file}"
}
ccpc-convert() {
    local file="$1"
    local name=$(basename ${file} .c)
    mv "${file}" "${name}.ccpc"
}
ccpc-unconvert() {
    local file="$1"
    local name=$(basename ${file} .ccpc)
    mv "${file}" "${name}.c"
}

