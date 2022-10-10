import os

def search(contest_num, problem):
	from_num = str((contest_num // 20 - 1) * 20 + 1).zfill(3) if contest_num % 20 == 0 else str((contest_num // 20) * 20 + 1).zfill(3)
	end_num = str((contest_num // 20) * 20).zfill(3) if contest_num % 20 == 0 else str((contest_num // 20 + 1) * 20).zfill(3)
	contest_num = str(contest_num).zfill(3)

	path = f'../AtCoder/ABC/{from_num}~{end_num}/{contest_num}/{problem}.cpp'

	if (not(os.path.isfile(path))):
		print(f'ABC-{contest_num}-{problem}')


def main():
	print('===== Missing File =====')

	for count in range(1, 273):
		search(count, 'C')

	print('========================')

main()