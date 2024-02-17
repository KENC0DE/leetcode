/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
  for (let fr = 0; fr < nums.length; fr++) {
      for (let sn = fr + 1; sn < nums.length; sn++) {
          if (nums[fr] + nums[sn] === target) {
              return [fr, sn];
          }
      }
  }
};
