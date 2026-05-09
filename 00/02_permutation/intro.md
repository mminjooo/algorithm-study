# 순열과 조합
- 순열: 순서 O ex) 순서를 재배치하여, ~한 순서의 경우 max 값
- 조합: 순서 X

# next_permutation
- #include <algorithm>
- 오름차순으로 정렬된 배열을 기반으로 순열을 만든다
- 배열이 123일 경우 잘 출력되지만 213일 경우 213 다음인 231 312 321만 출력되기 때문에 사용 전에 항상 sort로 오름차순 정렬 해주기

- 배열: [시작 지점 (from), 끝 지점 (to)]
- vector: [begin(), end()]

# prev_permutation
- 내림차순으로 정렬된 배열을 기반으로 순열을 만든다
- next만 공부하자..

# permutation 공식
- nPr = (n)! / (n-r)!
- n: 몇개 중에 r: 몇개 뽑을지
- priv_permutation의 while 루프 안에서 앞의 2개만 출력

# makePermutation
- 재귀함수로 만드는 순열
- n: 몇개 중에 r: 몇개 뽑을지 depth: 깊이(트리의 높이)
- Base Case (종료): depth==r이 되면 결과를 출력하고 멈춘다
- Recursive Step (진행): swap으로 자리를 바꾸고 depth+1로 들어간다
- Backtracking (복구): swap해서 배열을 원복한다