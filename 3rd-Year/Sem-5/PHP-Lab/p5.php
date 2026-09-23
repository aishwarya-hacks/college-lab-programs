<?php
$marks=array(24,56,78,91,34,67,23,90);
$distinction=0;
$failed=0;
foreach($marks as $mark)
{
if($mark>=75)
{
$distinction++;
}
elseif($mark<35)
{
$failed++;
}
}
echo "Distinction students=$distinction";
echo "<br>";
echo "Failed students=$failed";
?>