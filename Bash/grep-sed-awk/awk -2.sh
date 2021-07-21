awk '{if ($2 < 50 || $3 < 50 || $4 < 50) grade="Fail";
        else grade="Pass";
        print $1 " " ":" " " grade; }'
