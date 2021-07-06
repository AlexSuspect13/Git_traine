/**
 * @difficulty 8 kuy
 * @description This file contains an answer for The Wide-Mouthed frog! codewars task
 * @link https://www.codewars.com/kata/57ec8bd8f670e9a47a000f89/train/javascript
 * @author Komarovsky Andrey (askomar)
 *
 * Task short description:
 * 1. Frog asking the cretures he encounters what
 * they like to eat.
 * 2. When frog meet alligator, it then makes a
 * tiny mouth
 * Goal: Your goal  is to create
 *  the mouth_size method this method
 *  take one argument animal which
 * corresponds to the animal encountered by
 * frog. If this one is an alligator (case
 *  insensitive) return small otherwise
 *  return wide.
 */

function mouthSize(animal) {
  return animal.toLowerCase() === "alligator" ? "small" : "wide";
}
