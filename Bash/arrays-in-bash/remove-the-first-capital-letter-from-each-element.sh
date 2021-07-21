arrays=($(cat))
echo ${arrays[*]/[A-Z]/.}
