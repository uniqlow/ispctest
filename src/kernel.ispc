export
void
simple_add(
	uniform double vout[],
	uniform double vin0[],
	uniform double vin1[],
	uniform int count)
{
	foreach (index = 0 ... count) {
		varying float v0 = vin0[index];
		varying float v1 = vin1[index];
		vout[index] = v0 + v1;
	}
}
