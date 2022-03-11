// eca.h - code for elementary cellular automata

#include <stdint.h>

#define RULE(number, formula)                                       \
  static inline _Bool eca_rule##number(_Bool p, _Bool q, _Bool r) { \
    return formula;                                                 \
  }

// Generic rule application
static inline _Bool eca_rule(uint8_t number, _Bool p, _Bool q, _Bool r) {
  return number >> (p << 2 | q << 1 | r) & 1;
}

// Specific rule application
RULE(0, 0)
RULE(1, !(p | q | r))
RULE(2, !(p | q) & r)
//RULE(3, )
//RULE(4, )
//RULE(5, )
//RULE(6, )
//RULE(7, )
//RULE(8, )
//RULE(9, )
//RULE(10, )
//RULE(11, )
//RULE(12, )
//RULE(13, )
//RULE(14, )
//RULE(15, )
//RULE(16, )
//RULE(17, )
//RULE(18, )
//RULE(19, )
//RULE(20, )
//RULE(21, )
//RULE(22, )
//RULE(23, )
//RULE(24, )
//RULE(25, )
//RULE(26, )
//RULE(27, )
//RULE(28, )
//RULE(29, )
RULE(30, p ^ (q | r))
//RULE(31, )
//RULE(32, )
//RULE(33, )
//RULE(34, )
//RULE(35, )
//RULE(36, )
//RULE(37, )
//RULE(38, )
//RULE(39, )
//RULE(40, )
//RULE(41, )
//RULE(42, )
//RULE(43, )
//RULE(44, )
//RULE(45, )
//RULE(46, )
//RULE(47, )
//RULE(48, )
//RULE(49, )
//RULE(50, )
//RULE(51, )
//RULE(52, )
//RULE(53, )
//RULE(54, )
//RULE(55, )
//RULE(56, )
//RULE(57, )
//RULE(58, )
//RULE(59, )
//RULE(60, )
//RULE(61, )
//RULE(62, )
//RULE(63, )
//RULE(64, )
//RULE(65, )
//RULE(66, )
//RULE(67, )
//RULE(68, )
//RULE(69, )
//RULE(70, )
//RULE(71, )
//RULE(72, )
//RULE(73, )
//RULE(74, )
//RULE(75, )
//RULE(76, )
//RULE(77, )
//RULE(78, )
//RULE(79, )
//RULE(80, )
//RULE(81, )
//RULE(82, )
//RULE(83, )
//RULE(84, )
//RULE(85, )
//RULE(86, )
//RULE(87, )
//RULE(88, )
//RULE(89, )
//RULE(90, )
//RULE(91, )
//RULE(92, )
//RULE(93, )
//RULE(94, )
//RULE(95, )
//RULE(96, )
//RULE(97, )
//RULE(98, )
//RULE(99, )
//RULE(100, )
//RULE(101, )
//RULE(102, )
//RULE(103, )
//RULE(104, )
//RULE(105, )
//RULE(106, )
//RULE(107, )
//RULE(108, )
//RULE(109, )
//RULE(110, )
//RULE(111, )
//RULE(112, )
//RULE(113, )
//RULE(114, )
//RULE(115, )
//RULE(116, )
//RULE(117, )
//RULE(118, )
//RULE(119, )
//RULE(120, )
//RULE(121, )
//RULE(122, )
//RULE(123, )
//RULE(124, )
//RULE(125, )
//RULE(126, )
//RULE(127, )
//RULE(128, )
//RULE(129, )
//RULE(130, )
//RULE(131, )
//RULE(132, )
//RULE(133, )
//RULE(134, )
//RULE(135, )
//RULE(136, )
//RULE(137, )
//RULE(138, )
//RULE(139, )
//RULE(140, )
//RULE(141, )
//RULE(142, )
//RULE(143, )
//RULE(144, )
//RULE(145, )
//RULE(146, )
//RULE(147, )
//RULE(148, )
//RULE(149, )
//RULE(150, )
//RULE(151, )
//RULE(152, )
//RULE(153, )
//RULE(154, )
//RULE(155, )
//RULE(156, )
//RULE(157, )
//RULE(158, )
//RULE(159, )
//RULE(160, )
//RULE(161, )
//RULE(162, )
//RULE(163, )
//RULE(164, )
//RULE(165, )
//RULE(166, )
//RULE(167, )
//RULE(168, )
//RULE(169, )
//RULE(170, )
//RULE(171, )
//RULE(172, )
//RULE(173, )
//RULE(174, )
//RULE(175, )
//RULE(176, )
//RULE(177, )
//RULE(178, )
//RULE(179, )
//RULE(180, )
//RULE(181, )
//RULE(182, )
//RULE(183, )
//RULE(184, )
//RULE(185, )
//RULE(186, )
//RULE(187, )
//RULE(188, )
//RULE(189, )
//RULE(190, )
//RULE(191, )
//RULE(192, )
//RULE(193, )
//RULE(194, )
//RULE(195, )
//RULE(196, )
//RULE(197, )
//RULE(198, )
//RULE(199, )
//RULE(200, )
//RULE(201, )
//RULE(202, )
//RULE(203, )
//RULE(204, )
//RULE(205, )
//RULE(206, )
//RULE(207, )
//RULE(208, )
//RULE(209, )
//RULE(210, )
//RULE(211, )
//RULE(212, )
//RULE(213, )
//RULE(214, )
//RULE(215, )
//RULE(216, )
//RULE(217, )
//RULE(218, )
//RULE(219, )
//RULE(220, )
//RULE(221, )
//RULE(222, )
//RULE(223, )
//RULE(224, )
//RULE(225, )
//RULE(226, )
//RULE(227, )
//RULE(228, )
//RULE(229, )
//RULE(230, )
//RULE(231, )
//RULE(232, )
//RULE(233, )
//RULE(234, )
//RULE(235, )
//RULE(236, )
//RULE(237, )
//RULE(238, )
//RULE(239, )
//RULE(240, )
//RULE(241, )
//RULE(242, )
//RULE(243, )
//RULE(244, )
//RULE(245, )
//RULE(246, )
//RULE(247, )
//RULE(248, )
//RULE(249, )
//RULE(250, )
//RULE(251, )
//RULE(252, )
RULE(253, p | q | !r)
RULE(254, p | q | r)
RULE(255, 1)

uint32_t eca_rand(void);
void eca_srand(uint32_t);

#undef RULE
